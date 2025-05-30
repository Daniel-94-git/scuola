import os

try:
    # Ottiene la directory dello script
        # directory_script = os.path.dirname(os.path.abspath(__file__))
    # Costruisce il percorso al file 'prova.txt' nella stessa directory
        #percorso_file = os.path.join(directory_script, 'prova.txt')

    with open('prova.txt', 'w') as file:
        file.write("ciao\n")
        

    with open('prova.txt','r') as file:
        contenuto = file.read()
        print(contenuto)
        
    with open('prova.txt','a') as file:
        file.write("Aggiunto in un secondo with\n")
        file.write("Aggiunto ancora\n")
    
    with open('prova.txt','r') as file:
        contenuto = file.read()
        print(contenuto)

except FileNotFoundError:
    print(f"Il file non è stato trovato nel percorso: {percorso_file}")

except Exception as e:
    print(f"Si è verificato un errore: {e}")