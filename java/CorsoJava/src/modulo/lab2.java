package modulo;

import java.util.ArrayList;
import java.util.Enumeration;
import java.util.List;
import java.util.Scanner;
import java.util.function.Function;

public class lab2 {

    //Scrivi una funzione Java che filtra i numeri pari da una lista di
    // numeri utilizzando la programmazione funzionale con filter().
    public static void main(String[] args) {


        Scanner scanner = new Scanner(System.in);
        List <Integer> lista = new ArrayList<>();

        for(int i = 0; i <10;i++){
            System.out.println("Inserisci un numero : ");
            int numero = scanner.nextInt();
            lista.add(numero);
        }

        System.out.println("lista numeri pari : ");
        lista.stream().filter(numero -> numero%2 == 0).forEach(System.out::println);
    }
}

