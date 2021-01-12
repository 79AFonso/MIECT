//NMEC: 93170
//NOME: Afonso Pinheiro Teixeira

// Complete the functions (marked by ...)
// so that it passes all tests in DateTimeTest.

#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "SchedulingSequence.h"

// You may add auxiliary definitions and declarations here, if you need to.



// Create a SchedulingSequence capable of storing up to (capacity) intervals.

SchedulingSequence* SchedulingSequenceCreate(int capacity) {
  assert(capacity >= 0);
  // You must allocate space for the struct and for the intervals array!
  SchedulingSequence *instance = (SchedulingSequence*) malloc(sizeof(*instance));
  
  instance -> capacity = capacity;
  instance -> size = 0;
  instance -> intervals = (TimeInterval**) malloc(capacity * sizeof(TimeInterval*));
  
  return instance;

}

// Destroy SchedulingSequence *pss
void SchedulingSequenceDestroy(SchedulingSequence **pss) {
  assert(*pss != NULL);
  free((*pss) -> intervals);
  free(*pss);
  *pss = NULL;
  
}

int SchedulingSequenceIsEmpty(SchedulingSequence *ss) {
  return ss->size == 0;
}

int SchedulingSequenceIsFull(SchedulingSequence *ss) {
  return ss->size == ss->capacity;
}

// Add interval *ti to *ss.
// Return true on success,
// return false if *ti overlaps any of the intervals in *ss.
int SchedulingSequenceAdd(SchedulingSequence *ss, TimeInterval *ti) {
  assert(!SchedulingSequenceIsFull(ss));
  ss -> intervals[ss -> size] = ti;
  ss -> size++;

  if( ss -> size == 1) return 1;

  for(int i=0; i< ss -> size-1; i++){
    if(TimeIntervalOverlaps(ti, ss -> intervals[i]) == 1){
      ss -> size--;
      return 0;
    }
  }

  sort(ss);

  return 1;

}

// Get the interval at position (idx) of *ss.
// idx=0 is the first position idx=ss->size-1 is the last position.
// Precondition: 0 <= idx < ss->size.
TimeInterval *SchedulingSequenceGet(SchedulingSequence *ss, int idx) {
  assert (0 <= idx && idx < ss->size);
  
  return ss -> intervals[idx];

}

// Remove the interval at position (idx) of *ss, and return it.
// idx=0 is the first position idx=ss->size-1 is the last position.
// Precondition: 0 <= idx < ss->size.
TimeInterval *SchedulingSequencePop(SchedulingSequence *ss, int idx) {
  assert (0 <= idx && idx < ss->size);
  // This implies !SchedulingSequenceIsEmpty(ss).
  TimeInterval *result = ss -> intervals[idx];

  for(int i=idx; i< ss -> size; i++){
    TimeInterval* ti = ss -> intervals[i];
    ss -> intervals[i] = ss -> intervals[i+1];
    ss -> intervals[i+1] = ti;
  }
  
  ss -> size--;
  return result;

}

// You may add auxiliary definitions and declarations here, if you need to.

SchedulingSequence* sort(SchedulingSequence *ss){

    for(int i=0 ; i< ss -> size-2 ; i++){
        for(int j=1 ; j< ss -> size-1 ; j++) {
            int aux = TimeIntervalCompare(ss -> intervals[i], ss -> intervals[j]);
            if(aux > 0){
                TimeInterval* tmp = ss -> intervals[i];
                ss -> intervals[i] = ss -> intervals[j];
                ss -> intervals[j] = tmp;
            }
        }
    }

    return ss;
}


