package Esercitazione72.prove;

import javax.swing.plaf.synth.SynthTextAreaUI;
import java.util.Arrays;
import java.util.List;
import java.util.Optional;
import java.util.function.Function;

public class funzioneSimple {

    public static void main(String[] args) {

        Function<Integer,Integer> somma = x -> x + 5;
        Function<Integer,Integer> sottrazione = x -> x - 7;
        Function<Integer,Integer> moltiplicazione = x -> x * 5;
        Function<Float,Float> divisione = x -> x / 2;


        System.out.println("Sommo 5 alla funzione somma= " + somma.apply(5));

        Function <Integer,Integer> sommaSottrazioneMoltiplicazione = somma.andThen(sottrazione.andThen(moltiplicazione));
        System.out.println("complessa : " + sommaSottrazioneMoltiplicazione.apply(10));
        System.out.println("Divido : " + divisione.apply(50F));


        List lista = Arrays.asList(10,20,30,40,50,60);
        lista.stream().map(sommaSottrazioneMoltiplicazione).forEach(System.out::println);
    }


}
