package bloco1;

import java.util.*;

public class Ex1{

    static Scanner sc = new Scanner(System.in);
    public static void main(String[] args){

        if(args.length!=3){
            System.err.println("ERROR: Usage <prog> <num> <oper> <num>");
        }
        else {

            double firstNum=0;
            double secNum=0;

            try{
                firstNum = Double.parseDouble(args[0]);
                secNum = Double.parseDouble(args[2]);
            }
            catch(NumberFormatException e){
                System.out.println("Tem de introduzir um número no primeiro argumento");
            }

            double result=0;;

            switch(args[1]){
                case "+":
                    result = firstNum + secNum;
                    break;
                case "-":
                    result = firstNum - secNum;
                    break;
                case "*":
                    result = firstNum * secNum;
                    break;
                case "/":
                    result = firstNum / secNum;
                    break;
                default:
                    System.err.println("Operando não suportado!");
            }

            System.out.println(firstNum +" " + args[1] + " "+ secNum + " = " + result);

        }

    }

}