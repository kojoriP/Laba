#include "header.h"
#include "Funcs/functions.h"
/*
#include <boost/program_options.hpp>
using namespace boost::program_options;

void on_vec_size(int number){
	std::cout << "On vec_size: " << number << '\n';
}
void on_matrix_size(int number){
	std::cout << "On matrix_size: " << number << '\n';

}
*/
int main(int argc, const char* argv[]){
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int default_size = 3;
	int vec_size = default_size;
	int matrix_size = 3;
	/*
	// boost
	try
	{
		options_description desc{ "Options" };
		desc.add_options()
			("help,h", "Help screen")
			("vec_size", value<int>()->notifier(on_vec_size), "vec_size")
			("matrix_size", value<int>()->notifier(on_matrix_size), "Matrix_size");

		variables_map vm;

		store(parse_command_line(argc, argv, desc), vm);
		notify(vm);
		if (vm.count("help"))
			std::cout << desc << '\n';
		else if (vm.count("vec_size")) {
			std::cout << "vec_size: " << vm["vec_size"].as<int>() << '\n';
			vec_size = vm["vec_size"].as<int>();
		}
		if (vm.count("help"))
			std::cout << desc << '\n';
		else if (vm.count("matrix_size")) {
			std::cout << "Matrix_size: " << vm["matrix_size"].as<int>() << '\n';
			matrix_size = vm["matrix_size"].as<int>();
		}
	}
	catch (const error& ex)
	{
		std::cerr << ex.what() << '\n';
	}
	*/

	//init
	double *vec = new double[vec_size];
	double *vecMult = new double[vec_size];
	double **matrix = new double*[matrix_size];
	double **matrixSqr = new double*[matrix_size];
	for(int i = 0; i < matrix_size; i++) {
		matrix[i] = new double[matrix_size]; 
		matrixSqr[i] = new double[matrix_size];
	}

	initialization(vec, vec_size, matrix, matrix_size);
	
	// vec	
	printf("\n vec:\n");
	output_vec(vec, vec_size);

	//matrix
	printf("\n matrix:\n");
	output_matrix(matrix, matrix_size);

	//func
	printf("\n matrix * vec:\n");
	mult_matrix_vec(matrix, matrix_size, vec, vec_size, vecMult);
	output_vec(vecMult, vec_size);

	printf("\n matrix^2: \n");
	sqr_matrix(matrix, matrix_size, matrixSqr);
	output_matrix(matrixSqr, matrix_size);

	system("pause");
	return 0;
}


