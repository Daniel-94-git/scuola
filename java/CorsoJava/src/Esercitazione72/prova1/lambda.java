package Esercitazione72.prova1;

import java.util.ArrayList;
import java.util.Enumeration;
import java.util.List;
import java.util.Scanner;
import java.util.function.Function;

public class lambda {


    public static void main (String[] args){

        Scanner scanner = new Scanner(System.in);
        Function <Integer,Integer> somma = x -> x +5;
        Function <Integer,Integer> quadro = x -> x*x;

        Function <Integer,Integer> fusion = somma.andThen(quadro);

        System.out.println(fusion.apply(20));

        List<Integer> pippo = new ArrayList<>();

        for(int i = 0; i <= 5;i ++){
            System.out.println("Inserisci un numero : ");
            int numero = scanner.nextInt();
            pippo.add(numero);
        }

        pippo.stream().map(fusion).filter(numero -> numero >65).forEach(System.out::println);
    }


}
