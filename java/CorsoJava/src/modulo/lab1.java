package modulo;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.util.function.Function;

public class lab1 {
    public static void main(String[] args) {
        //Scrivi una funzione Java che utilizza la programmazione funzionale per
        // sommare tutti gli elementi di una lista di numeri interi, utilizzando
        // il metodo reduce() di Stream.

        Scanner scanner = new Scanner(System.in);
        List<Integer> lista = new ArrayList<>();

        for(int i = 0; i <10;i++){
            System.out.println("Inserisci un numero : ");
            int numero = scanner.nextInt();
            lista.add(numero);
        }
        lista.stream().reduce((integer, integer2) -> lista.get(numero)+lista.get(numero))


    }


}
