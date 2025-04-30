package Esercitazione52.Esercitazione2_SottoClassi.Lab2_Inf_52;

// Classe genitore (superclasse)
class Animale {
    public String nome;
    protected String tipo;// Accessibile a questa classe e alle sue sottoclassi
    protected String soprannome;
    private int eta;

    public Animale(String nome, String tipo,String soprannome, int eta) {
        this.nome = nome;
        this.tipo = tipo;
        this.soprannome = soprannome;
        this.eta = eta;
    }

    public String getSoprannome() {
        return soprannome;
    }

    public void setSoprannome(String soprannome) {
        this.soprannome = soprannome;
    }

    public void faiVerso() {
        System.out.println("L'animale fa un verso generico.");
    }

    // Metodo per accedere all'attributo protetto (dalla stessa classe)
    public String getTipoAnimale() {
        return this.tipo;
    }

    // Metodo per accedere all'attributo privato (solo da questa classe)
    public int getEtaAnimale() {
        return this.eta;
    }

    // Metodo per modificare l'attributo privato (solo da questa classe)
    public void setEtaAnimale(int eta) {
        this.eta = eta;
    }
}

// Sottoclasse (classe figlia) che estende Animale
class Cane extends Animale {
    private String razza;

    public Cane(String nome, String razza ,String soprannome,int eta) {
        // Chiama il costruttore della superclasse usando super()
        super(nome, "mammifero",soprannome,eta);
        this.razza = razza;
    }

    @Override
    public void faiVerso() {
        System.out.println("Il cane abbaia: Bau!");
        // Posso accedere all'attributo 'tipo' ereditato perché è protected
        System.out.println("È un " + this.tipo);
        // Non posso accedere direttamente a 'eta' perché è private nella superclasse
        // Devo usare il metodo pubblico fornito dalla superclasse:
        System.out.println("Ha " + getEtaAnimale() + " anni.");
    }

    public String getRazza() {
        return this.razza;
    }
}


