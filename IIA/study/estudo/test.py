import sys
boxe = [(1,2), (3,4)]
caixa = [None] * len(boxe)


for i in range(len(boxe)):
    boxes = boxe[i]
    for j in range(len(boxe)):
        if i==0:
            if i==j:
                caixa[j] = [(boxes[0]-1, boxes[1])], [(boxes[0]+1, boxes[1])], [(boxes[0], boxes[1]-1)], [(boxes[0], boxes[1]+1)]
            else:
                caixa[j] = [boxes], [boxes], [boxes], [boxes]
        else:
            if j==i:
                caixa[j][0].append((boxes[0]-1, boxes[1]))
                caixa[j][1].append((boxes[0]+1, boxes[1]))
                caixa[j][2].append((boxes[0], boxes[1]-1))
                caixa[j][3].append((boxes[0], boxes[1]+1))
            else:
                caixa[j][0].append(boxes)
                caixa[j][1].append(boxes)
                caixa[j][2].append(boxes)
                caixa[j][3].append(boxes)

print(caixa)

possible_actions = []

for box in boxe:
    box_moves = []
    for i in range(4):
        auxlist = []
        for b in boxe:
            # mexer caixa para cima ('w')
            if b == box and i==0:
                auxlist.append((box[0], box[1]-1))
            # mexer caixa para baixo ('s')
            elif b == box and i==1:
                auxlist.append((box[0], box[1]+1))
            # mexer caixa para direita ('d')
            elif b == box and i==2:
                auxlist.append((box[0]+1, box[1]))
            # mexer caixa para esquerda ('a')
            elif b == box and i==3:
                auxlist.append((box[0]-1, box[1]))
            else:
                auxlist.append(b)
        box_moves.append(auxlist)
    possible_actions.append(box_moves)

print(possible_actions)
            
# for c in caixa:
#     for i in range(4):
#         for bm in c[i]:
#             if bm not in box:
#                 aux_lista = c[i][:]
#                 # print("ACTION", c[i])
#                 aux_lista.remove(bm)
#                 last = list(set(box) - set(aux_lista))
#                 # print(last)
#                 # print("last pos",(last[0][0] - (bm[0]-last[0][0]),  last[0][1] - (bm[1]-last[0][1])))
#                 # print("move", bm)
#                 # print("ACTION2", c[i])


