package Esercitazione72;

import java.util.function.Function;

public class Main {
    public static void main(String[] args) {

        Function<Integer,Integer> add5= x -> x + 5;
        Function<Integer,Integer> multiply = x -> x * 2;

        Function<Integer,Integer> addThenMultiply = add5.andThen(multiply);
        System.out.println(addThenMultiply.apply(5));

    }
}
