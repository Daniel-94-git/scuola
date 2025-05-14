package modulo;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.util.function.Function;

public class lab3 {
    public static void main(String[] args) {

        //Scrivi una funzione Java che crea una lista di quadrati dei numeri da 1 a 10 utilizzando map() in un stream.
        Scanner scanner = new Scanner(System.in);
        Function<Integer,Integer> square = x -> x*x;
        List <Integer> lista = new ArrayList<>();

        for(int i = 0; i <10;i++){
            System.out.println("Inserisci un numero : ");
            int numero = scanner.nextInt();
            lista.add(numero);
        }
        lista.stream().map(square).forEach(System.out::println);
    }
}
