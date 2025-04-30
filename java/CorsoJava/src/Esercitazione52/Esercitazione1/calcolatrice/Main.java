package Esercitazione52.Esercitazione2_SottoClassi.Esercitazione1.calcolatrice;

public class Main {
    public static void main(String[] args) {

        Calcolatrice erikson = new Calcolatrice(50,"Erikson");
        erikson.somma(30,50);
        System.out.println(erikson.getRisultatoSomma());
        erikson.moltiplicazione(10,40);
        System.out.println(erikson.getRisultatoMultiplicazione());
        System.out.println(erikson);
        erikson.potenzaDiDue(4.2);
    }
}
