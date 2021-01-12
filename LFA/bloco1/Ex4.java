package bloco1;

import java.util.*;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.io.*;

public class Ex4{

    static Scanner sc = new Scanner(System.in);
    public static void main(String[] args) throws IOException {

        HashMap<String, String> list = new HashMap<String, String>();

        List<String> lines = Files.readAllLines(Paths.get("numbers.txt"));

        for(String str : lines){
            String s[] = str.split(" ");

            list.put(s[2], s[0]);
        }

        System.out.print("Introduza os números por extenso : ");
        String s = sc.nextLine();

        String str[] = s.split(" ");
        String auxStr[] = new String[str.length];
        int i=0;

        for(String a : str){
            boolean aux = false;
            for(String b : list.keySet()){
                if(a.equals(b)){
                    auxStr[i] = a;
                    i++;
                    aux = true;
                    break;
                }
                else  aux = false;
            }
            if(aux=false) System.out.println("Número não aceite -> " + a);
        }

        String finalStr[] = new String [i];

        String exten="";

        for(int j=0; j<finalStr.length; j++){
            finalStr[j] = auxStr[j];
            exten += finalStr[j] +  " ";
        }

        int sum=0;
        int buffer=-1;

        for(String a : finalStr){
            try{
                int num = Integer.parseInt(list.get(a));
                if(num == 100 || num == 1000 || num == 1000000) buffer *= num;
                else {
                    if(buffer!=-1) sum+=buffer;
                    buffer = num;
                }
            }catch (NumberFormatException e){
                System.out.println("ERROR: Número inválido!!");
                System.out.printf("Este número está errado -> ");
            }
        }
        sum+=buffer;

        System.out.println(exten + " -> " +sum);
  
    }

}