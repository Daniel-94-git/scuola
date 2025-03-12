package esercizio3;

public class main {

    public static void main(String[] args) {

        ContoBancario CcDaniel = new ContoBancario("Daniel",1000);

        CcDaniel.deposito(2000);
        System.out.println("\n");
        CcDaniel.prelievo(3500);
        System.out.println("\n");
        CcDaniel.prelievo(1500);


    }
}
