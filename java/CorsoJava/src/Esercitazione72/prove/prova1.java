package Esercitazione72.prove;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.function.Function;

public class prova1 {

    public static int factorial(int n){

        if((n == 0)) return 1;
        return n*factorial(n-1);

    }

    public static void main(String[] args) {

        Function <Integer,Integer> somma  = x-> x + 10;
        Function <Integer,Integer> square = x-> x * x;
        Function <Integer,Integer> sottra = x -> x - 20;

        Function <Integer,Integer> fusione = somma.andThen(square.andThen(sottra));

        System.out.println(fusione.apply(20));

        List<Integer> drop = Arrays.asList(1,23,4,5,67,2);

        drop.stream().map(fusione).forEach(System.out::println);
        System.out.println("Fattoriale : " + factorial(5));

    }


}
