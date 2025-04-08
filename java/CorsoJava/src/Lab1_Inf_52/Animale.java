package Lab1_Inf_52;

public class Animale {

    private String name;
    private int age;
    private float weight;
    private boolean has_legs;


    public float getWeight() {
        return weight;
    }

    public void setWeight(float weight) {
        this.weight = weight;
    }

    public Animale(String name, int age, float weight) {
        this.name = name;
        this.age = age;
        this.has_legs = true;
        this.weight = weight;
    }


    public float ingrassare(float ciccia){

        weight = weight + (ciccia / 100);
        return weight;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public boolean isHas_legs() {
        return has_legs;
    }

    public void setHas_legs(boolean has_legs) {
        this.has_legs = has_legs;
    }




}
