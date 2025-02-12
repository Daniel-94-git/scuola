import Esercizi.Calcolatrice;
import Esercizi.Libro;

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
/*
        System.out.println("Hello and welcome!");

        Animale pippo = new Animale("Pippo");
        System.out.println("Il nome del oggetto pippo è :"+pippo.getNome());
        pippo.setNome("PIPPO");
        System.out.println("Il nome del oggetto pippo  ora è :"+pippo.getNome());

        System.out.println(pippo);

        pippo.eatFood(500);
        System.out.println(pippo);
        pippo.goToWalk(10);
        System.out.println(pippo);

        Animale pluto = new Animale("pluto",10,100,false);
        System.out.println(pluto);

*/

        // GESTIONE CLASSE LIBRO

        Libro primoVolume = new Libro("Antifragile","Nassim Taleb",2018);
        Libro secondoVolume = new Libro("Cigno Nero","Nassim Taleb",2005);


        primoVolume.stampaDettagli(primoVolume.getTitolo(), primoVolume.getAutore(), primoVolume.getAnnoPubblicazione());
        System.out.println("\n");
        secondoVolume.stampaDettagli(secondoVolume.getTitolo(), secondoVolume.getAutore(), secondoVolume.getAnnoPubblicazione());

        primoVolume.setAutore("Pippo");
        primoVolume.setTitolo("Pluto");
        primoVolume.setAnnoPubblicazione(2020);

        System.out.println("\n");
        primoVolume.stampaDettagli(primoVolume.getTitolo(), primoVolume.getAutore(), primoVolume.getAnnoPubblicazione());

        secondoVolume.setTitolo("Ciao");
        secondoVolume.setAutore("Mondo");
        secondoVolume.setAnnoPubblicazione(1900);

        System.out.println("\n");
        secondoVolume.stampaDettagli(secondoVolume.getTitolo(), secondoVolume.getAutore(), secondoVolume.getAnnoPubblicazione());

        // GESTIONE CLASSE CALCOLATRICE

        Calcolatrice calc = new Calcolatrice(5,5);
        int som = calc.mSomma(calc.getNumero1(), calc.getNumero2());
        int mul = calc.mul(calc.getNumero1(), calc.getNumero2());
        System.out.println("\n");
        System.out.println("METODO SOMMA :");
        System.out.println(som);

        System.out.println("\n");
        System.out.println("METODO MUL :");
        System.out.println(mul);


        System.out.println("\n");
        calc.stampaRsultati(calc.getNumero1(), calc.getNumero2());


    }
}