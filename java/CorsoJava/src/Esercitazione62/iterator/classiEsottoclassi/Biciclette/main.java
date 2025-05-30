package Esercitazione62.iterator.classiEsottoclassi.Biciclette;

public class main {
    public static void main(String[] args) {

        IBicicletta pippo = new Bici(5,8,false);

        System.out.println(pippo.getPeso());
        System.out.println(pippo.getMarce());
        


    }

}
