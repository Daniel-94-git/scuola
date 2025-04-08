package Lab1_Inf_52;

public class Main {

    public static void main (String[]Args){

        Animale pluto = new Animale("PLUTO",30, 50F);
        System.out.println(pluto.getName());
        System.out.println(pluto.getAge());
        pluto.ingrassare(200);
        System.out.println(pluto.getWeight());

    }
}
