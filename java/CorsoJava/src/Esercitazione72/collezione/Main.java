package Esercitazione72.collezione;
import java.util.Arrays;
import java.util.List;
import java.util.function.Function;
public class Main {


    public static void main(String[] args) {

        List lista = Arrays.asList(1,2,3,4,5);
        Function<Integer,Integer> square = x -> x*x;
        lista.stream().map(square).forEach(System.out::println);
    }
}
