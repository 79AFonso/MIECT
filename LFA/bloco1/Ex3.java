package bloco1;

import java.util.*;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.io.*;

public class Ex3{

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

        String nums="";


        for(int i=0; i<str.length; i++){
            for(String a : list.keySet()){ 
                if(str[i].equals(a)){
                    nums += list.get(a) + " ";
                }
            }
        }

        System.out.println(nums);

    }

}