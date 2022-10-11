#include <stdio.h>

class Parent        {};
class Child1 : public Parent {};
class Child2 : public Parent {};


int main()
{
    // float a = 420.042f; // a est un float donc type précis
    // void *b = &a; // b est type général (ptr sur n'importe quel type ) recupere l'adresse du flottant.
    // void *c = (void *) &a; // Ici on a perdu en précision mais gagné en généralité;

    // void *d = &a; //réintrepretation de l'adresse d'un flottant vers un void* avec un cast explicite
    // //int *e = d; // ici cest une démontion. Reintrepreation implicite d'une adresse d'un flottant vers une adresse d'un int. ATTENTION DANS LE CAS DUNE REINTERPRETATION DESCENDANTE => on privilegie un cast explicite.

    // // int *e = d = cas de reinterpreation descendante donc ce qui est correct cest :
    //  int *e = (int *) d;

    // ******* qualifier : ajoute  de la hierarchie pour les types ******//
    // int a = 42;

    // int const *b = &a;// implicit type qualifier cast
    // int const *c = (int const *)&a; // explicit type qualifier cast
    // // Dans le cas d'une démotion , ca ne compilera => il faudra caster explicitement
    // int const *d = &a;
    // int* e = d; // Erreur car on passe d'un général à une précision
    // int* f = (int *)d;

    // ********type operator cast ****** //

    // class Foo
    // {
    //     public : 
    //         Foo(float const v): _v(v){};
    //         float getV() {return this->_v;};

    //         operator float()    {return this->_v;}; // operateur type cast 
    //         operator int()      {return static_cast<int>(this->_v);}; // operateur type cast

    //     private :
    //     float _v;
    // };

    // Foo a( 420.024f );
    // float b = a;
    // int   c = a;

    // std::cout << a.getV() <<

    // ******** Explicit keyword ******//

    class A {};
    class B {};
    class C {
        
    }

}