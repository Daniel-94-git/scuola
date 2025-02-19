package Esercitazione3_Animalee_SottoClasse;

public class Main {
    public static void main(String[] args) {

        Sub_Cane Gesualdo = new Sub_Cane(20.50F,4,true,false,20,false);

        Gesualdo.nonEretto();
        Gesualdo.isFedele();
        Gesualdo.regaloGiocattolo(3);
        Gesualdo.eat_Food(300);
        Gesualdo.stampaDettagli();



    }
}
