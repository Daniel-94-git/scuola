package Esercizi;

public class Calcolatrice {

    private int numeroTasti;
    private String marcaCalcolatrice;
    private int numeroDispay;
    private int risulatoSomma;
    private int

    public int somma(int numero1,int numero2){

        int somma = numero1 +numero2;
        return  somma;

    }


    public  int mul(int numero1,int numero2){

        int mul = numero1 * numero2;
        return  mul;
    }

    public void stampaRsultati(int numero1,int numero2){

        int sum = mSomma(numero1,numero2);
        System.out.println("Somma : ");
        System.out.println(sum);
        int mol = mul(numero1,numero2);
        System.out.println("Moltiplicazione : ");
        System.out.println(mol);
        



    }

    public int getNumero1() {
        return numero1;
    }

    public void setNumero1(int numero1) {
        this.numero1 = numero1;
    }

    public int getNumero2() {
        return numero2;
    }

    public void setNumero2(int numero2) {
        this.numero2 = numero2;
    }
}
