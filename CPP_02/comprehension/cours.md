1. Surcharge de fonctions : Définir plusieurs fonctions avec le meme nom. L'idée est de pouvoir définir l'appel a la fonction selon des valeurs de retour et des parametres differents.

2. Surcharge dòperateurs : 1Fix (notation naturelle de type : 1 + 1), prefix et postfix (notation polonaise inversée : 1 1 +).
    A. Prefix : Notation fonctionnelle
      ==>  +(1, 1) ou 1.+(1)
3. Règles a respecter concernant la surcharge d'opérateurs:
    ==> Comportement doit rester naturel
    ==> la surchage doit avoir un rapport 
    ==> Ne pas en faire de surcharges d'opérateurs

4. Canonical Form :
==> Bonne pratique : Frome canonique de Coplien
==> Est canonique : Toute classe comportant :
    - Un constructeur par défaut
    - Un constructeur par copie (Constructeur qui prend en parm une instance de la classe que l'on définit) : pour réaliser une copie de cette classe ==> Crée un nouvel objet de la classe
    - Surcharge d'opérateur = (assignation) => same que constructeur copie alors que l'operateur d'assignation = mise à jour
    - Destructeur

