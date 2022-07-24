#include "ft_cat.h"

int main (int argc, char *argv[]){
	

	if(argc == 1){
		ft_create_file();
	}
	
	if(argc > 1){
		ft_display_files(argc, argv);
	}

	/*	
	int i = 0; 
	while(i < argc)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i++;
	}
	ft_putstr("\n");
	*/
	//ft_display_files(argc, argv);	
	
	return 0;
}

