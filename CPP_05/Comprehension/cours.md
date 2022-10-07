1. Classe imrbiquee = definir une classe dans une autre classe
Ex :
    class Cat
    {
        public:
        class Leg
        {
            //[...]
        }
    }

    class Dog
    {
        public:
        class Leg
        {
            //[...]
        }
    }
Les classes Leg sont differntes
==> Dans l'instanciation, je peux :
    instancier : Cat    somecat
    Cat::Leg            somecatsleg;

2.Exceptions
    = Nouvelle Manière de gérer les erreurs