package bloco1;

import java.util.*;

public class Ex2{

    static Scanner sc =  new Scanner(System.in);
    public static void main(String[] args){

        System.out.print("Introduza a notação : ");
        String nota = sc.nextLine();

        Stack <Double> pile = new Stack <Double>();

        String[] s = nota.split(" ");



        int j=0;
        

        for(int i=0;i<s.length;i++){

            try{
                pile.add(Double.parseDouble(s[i]));
                j++;
                System.out.println("Stack : "+ pile);
            }
            catch(NumberFormatException e){
            
            }
        }

        int oper = s.length - j;

        double result=0;

        do{


            switch(s[s.length-oper]){
                case "+":
                    result = pile.pop() + pile.pop();
                    break;
                case "-":
                    result = pile.pop() - pile.pop();
                    break;
                case "*":
                    result = pile.pop() * pile.pop();
                    break;
                case "/":
                    result = pile.pop() / pile.pop();
                    break;
                default:
                    System.err.println("Operando não suportado!");

            }

            oper--;
            pile.add(result);
             System.out.println("Stack : "+pile);


        } while(oper>0);

    }
}