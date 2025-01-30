import Lab1.*;

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {

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






    }
}