package Esercitazione72.prove;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Scanner;
import java.util.function.Function;
import java.util.stream.Collectors;

public class provaFunzioneComplessa {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int daSommare = 10;
        int daMoltiplicare = 5;

        Function <Integer,Integer> somma = x -> x+ daSommare;
        Function <Integer,Integer> moltiplicazione = x->x * daMoltiplicare;

        Function <Integer,Integer> fusioneSommaMol = somma.andThen(moltiplicazione);

        System.out.println(fusioneSommaMol.apply(100));

        LinkedList <Integer> lista = new LinkedList<>();

        for(int i = 0; i<=5;i++){
            System.out.println("Inserisci un numero : ");
            int numeroInserito = scanner.nextInt();
            lista.add(numeroInserito);
            System.out.println("Il numero che hai inserito , messo nella funzione complessa da : " + fusioneSommaMol.apply(numeroInserito));
        }

        System.out.println("Da qui filter collect ");
        lista.stream().map(fusioneSommaMol).forEach(System.out::println);
        ArrayList<Integer> lista2 = (ArrayList<Integer>) lista.stream().map(fusioneSommaMol).filter(numero->numero>100).collect(Collectors.toList());

        System.out.println("Da qui i numeri filtrati!");
        for (int numeri : lista2){
            System.out.println(numeri);

        }


    }
}
