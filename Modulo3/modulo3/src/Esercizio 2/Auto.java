package esercizio2;

public class Auto {

    private String marca;
    private String modello;
    private int anno;

    public Auto(String marca,String modello,int anno){

        this.marca = marca;
        this.modello = modello;
        this.anno = anno;
    }

    public boolean isVecchia(){

        boolean vecchia;

        vecchia = (2025 - anno) >= 10;

        return vecchia;
    }


    public int getAnno() {
        return anno;
    }

    public void setAnno(int anno) {
        this.anno = anno;
    }
}
