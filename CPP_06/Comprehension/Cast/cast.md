1. Cast implicite:
    A. Conversion implicite : Convertir un code en x bits en un code de y bits

2. Cast explicite

3. Hierarchie dns les types
    A. int est plus petit que double et moins precis. Convertir un type moins precis vers type plus precis : OK (on gagne de la précision) or aller d'un type plsu precis vers moins precis => perte de precision.

Flag a utiliser : -Wnoconversion : va interdire les casts implicites sur des pertes de précision

*************** Type reinterpretation  ******************
Conversion identitaire : Valeur de base, apres reconversion, garde les memes bits => Reinterpretation.
void * => contenir uen adresse de n'importe quel type. Avec ca on gagne en généralité mais on perd en précision.

A - Promotion : partir d'une adresse plus précise à generale =>Promotion implicite OK
or l'inverse : KO
l'inversion = démotion : regagner en précision donc aller du général au précis

4. Conversion identitaire qui donne lieu a des reinterpretations

5. Cas particuliers : cast de type qualifier (const ou volatile)

6. Downcast ou Upcast : dans le cas d'héritage de classe

7. Static cast : static_cast<int>(b) : je souhaite faire un static en int de b // cast en C++
pb: caster deux objets sans lien de hierarchie = AMPOSSI

8. Dynamic cast : le plus interessant.
Seul cast a avoir lieu au run time(execution) : Donc peut compiler mais foirer lors de l'éxecution du code. (contrairement aux static => ont lieu à la ocmpilation.)
Ne fonctionne que dans le cas de polymorphisme sous-typage (au moins l'une des fonctions membres est virtulle pr pvoir utiliser le dynamic cast)
Pour une classe polymorphe => une rtti = run type info va permettre au dynamic de voir si possible

Dynamic cast : dans le cas d'un downcast et marche sur des pointeurs ou référence
renvoie NULL si le cast est pas possible

Attention, la référence ne peut pas être NULLE

9. Reinterpret cast = réinterpretation, upcast et downcast. C'est le plus permissif de tous les casts
utile pour les retypages :

10. Const cast = réaliser une transfo de qualifier de type
Passer de valeur normale à valeur constante : OK
l'invere : dans le cas d'une démotion => KO DONC CONST CAST : const_cast<int *>(valeur): "<int *> = type cible
UTILISER UN CONST CAS signifie que ca pas été bien codé car vous avez raté de constantiser une valeur

Attention dynammic cast ne peuvent marcher que sur pointeur ou reference
11. Les type cast operator du c++ : 
dans ma classe, avoir ma cast operator :
=====>

12. Explicit keywords :
cast = ressemble à un appel de fonctions/constructeur
c++ autorise UN cast implicite dans le code d'un expression quelle quelle soit dans le code
explicit permet d'interdite la construction implicite de notre classe 