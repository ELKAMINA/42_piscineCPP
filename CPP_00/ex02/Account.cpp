/*  Static = Variables qui existent au niveau de la classe et non au niveau de l'instance. On les appelles les variables ou fonctions de la classe et non de l'instance. Attributs non membres et fctions non membres. --- STATIC ----        */

/*  Une donnee statique est une donne qui na de limportance quau niveau de la classe et non des instances      */

/*  EN c++, quand on cree une classe et quon lui affecte des fonctions membres, une instance est automqtiauement passe en param pour pvooir utiliser le pointeur THIS or pour les STATIC : NOOOON  */

/*  LEs attributs non membres ne sont pas initialises dans des constructeurs. L'initialisation se fait dans le .cpp en dehors de toutes les fctions/contruct/destruct*/

/*  dans les fct ou attributs non membres, quand on return, on return tel que :

	return Sample:: _nbInst;
	 */