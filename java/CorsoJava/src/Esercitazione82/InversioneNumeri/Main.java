package Esercitazione82.InversioneNumeri;

import java.util.Scanner;
import java.util.Stack;

public class Main {
    //Stack Inverso
    //Creare una pila che accetta numeri interi da
    //terminale e li stampa in ordine inverso.

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        Stack<Integer> pila = new Stack<>();
        Stack<Integer> pila2 = new Stack<>();
        for (int i = 0; i < 5; i++) {

            System.out.println("Inserisci un intero : ");
            int numeroInserito = scanner.nextInt();
            pila.add(numeroInserito);
        }

        System.out.println("Ordine corretto : ");
        System.out.println(pila);

        for (int i = 0; i < 5; i++) {

           int numeroDaInvertire = pila.pop();
           pila2.add(numeroDaInvertire);
        }
        System.out.println("Ordine inverso : ");
        System.out.println(pila2);
    }
}
