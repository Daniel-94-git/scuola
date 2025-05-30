package Esercitazione62.iterator;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.Scanner;
import java.util.function.Function;

public class provaIteratore {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        ArrayList lista = new ArrayList<>();
        Collections.addAll(lista,1,2,3,4,5,6,7,8,9);

        Iterator iterator = lista.iterator();

        while (iterator.hasNext()){
            int numero = (int) iterator.next();
            System.out.println(numero);

            if(numero == 2) {

                System.out.println("C'è anche un :" + numero);
            }

        }



    }

}
