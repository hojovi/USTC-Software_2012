//
//      consts.h
//      PNAS04Team
//
//      Created by Jack Kang on 12-7-19.
//
//

#ifndef PNAS04Team_consts_h
#define PNAS04Team_consts_h

#include <string>

//
//      glaobal constants
//
//      path strings

//#define ROOT_PATH "/users/apple/desktop/root/"
//#define INPUT_PATH "input/"
#define DATABASE_PATH "database/"

#define OPERONS_PATH DATABASE_PATH"operons/"
#define GENES_PATH DATABASE_PATH"genes/"
#define PROMOTERS_PATH DATABASE_PATH"promoters/"
#define RBSES_PATH DATABASE_PATH"rbses/"
#define TERMINATORS_PATH DATABASE_PATH"rbses/"


//#define COMPLETEMODEL_OUTPUT_PATH saves_path"complete/"
//#define MOTIFMODEL_OUTPUT_PATH saves_path"motifs/"

extern std::string output_path;
extern std::string saves_path;
extern std::string html_saves_path;



//
//      constants in network inference process
//

//      Total evolution number of the program
extern int total_evo;// 1000

//      Total number of cells
extern int population;// 200

//      Number of cells that do not change topology
extern int cells_unchanged;// 5

//      Number of cells that are generated to SBMLModels
extern int num_sbmlmodel;// 10

extern int buildChoice;


//      parameters for mutation in Cell
#define PROB_MUT_DEG_PROT 0.5
#define PROB_MUT_KIN_CONST 1.0
#define PROB_MUT_ADD_GENE 0.4
#define PROB4 0.1
#define PROB_MUT_ADD_POSTMOD 0.1


//      parameter multiplied to rate when modify forward or reverse rates in Reaction
#define RATE_MULTI 0.7

//      parameters that add nodes size, components complexity and rlist size in the score function
#define PARAMETER_NODE_SIZE 0.2
#define PARAMETER_COMPLEX_SIZE 0.05
#define PARAMETER_REACTION_SIZE 0.1



//
//      constants in building plasmids process
//




#endif
