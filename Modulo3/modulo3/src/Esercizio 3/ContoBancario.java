package esercizio3;

public class ContoBancario {

    private String titolare;
    private float saldo;


    public ContoBancario(String titolare,float saldo){

        this.titolare= titolare;
        this.saldo = saldo;
    }

    public float deposito(float depositando){

        saldo = saldo + depositando;
        System.out.println("Il tuo saldo ora è di : " + saldo + "$$");
        return saldo;
    }

    public float prelievo(float prelevando){

        if(prelevando > saldo){
            System.out.println("Non puoi prelevare più del saldo disponibile.");
        }
        else {
            saldo = saldo - prelevando;
            System.out.println("Il tuo saldo ora è di : " + saldo + "$$");
        }
        return saldo;
    }
}
