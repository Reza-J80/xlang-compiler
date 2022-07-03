%{
  #include "tree.h"
  #include <vector.h>
  #include <stdio.h>
  #include <iostream>
  using namespace std;

  extern int yylex();
  extern int yyparse();
  extern FILE *yyin;

  void yyerror(const char *s);

  int findIndex(vector<var> list , string name);
  int findIndex(vector<func> list , string name);

	extern int yylineno;

  int input;
  tree *root;

  vector<struct var> varList;
  vector<struct func> funcList;
%}


%union{
  int number;
  char* str;
  struct var var;
  struct func func;
  struct expression expression;
  struct loc loc;
  vector<string> types;
}



%token<str> TOKEN_BOOLEANTYPE
%token<str> TOKEN_BREAKSTMT
%token<str> TOKEN_CALLOUT
%token<str> TOKEN_CLASS
%token<str> TOKEN_CONTINUESTMT
%token<str> TOKEN_ELSECONDITION
%token<str> TOKEN_LOOP
%token<str> TOKEN_IFCONDITION
%token<str> TOKEN_INTTYPE
%token<str> TOKEN_RETURN
%token<str> TOKEN_VOIDTYPE
%token<str> TOKEN_PROGRAMCLASS
%token<str> TOKEN_MAINFUNC
%token<str> TOKEN_ID
%token<str> TOKEN_ASSIGNOP
%token<str> TOKEN_MINUSASSIGNOP
%token<str> TOKEN_PLUSASSIGNOP
%token<str> TOKEN_LOGICOP
%token<str> TOKEN_EQUALITYOP
%token<str> TOKEN_NONEQUALITYOP
%token<str> TOKEN_LEQOP
%token<str> TOKEN_GEQOP
%token<str> TOKEN_LESSOP
%token<str> TOKEN_GREATEROP
%token<str> TOKEN_ANDOP
%token<str> TOKEN_OROP
%token<str> TOKEN_MODULSOP
%token<str> TOKEN_DIVISIONOP
%token<str> TOKEN_MULTIPLEOP
%token<str> TOKEN_MINUSOP
%token<str> TOKEN_PLUSOP
%token<str> TOKEN_LCB
%token<str> TOKEN_RCB
%token<str> TOKEN_LB
%token<str> TOKEN_RB
%token<str> TOKEN_LP
%token<str> TOKEN_RP
%token<str> TOKEN_SEMICOLON
%token<str> TOKEN_COMMA
%token<str> TOKEN_CHARCONST
%token<str> TOKEN_STRINGCONST
%token<number> TOKEN_HEXADECIMALCONST
%token<number> TOKEN_DECIMALCONST
%token<number> TOKEN_BOOLEANCONST


%type<str>block
%type<str>method_name
%type<str>ids
%type<str>method_type
%type<str>arg
%type<str>variables
%type<str>variable
%type<str>id 
%type<str>string_literal
%type<str>type

%type<number>int_literal 
%type<number>deciamal_literal 
%type<number>hex_literal
%type<number>bool_literal 
%type<number>char_literal

%type<expression>literal
%type<expression>expr
%type<expression>expr1
%type<expression>expr2
%type<expression>expr3
%type<expression>expr4
%type<expression>expr5
%type<expression>expr6
%type<expression>expr7
%type<expression>expr8
%type<expression>method_call
%type<expression>statements
%type<expression>statement

%type<types>args
%type<types>exprs

%type<loc>location






%%
/*============================program============================*/
program:  
  TOKEN_CLASS TOKEN_PROGRAMCLASS TOKEN_LCB decl_list TOKEN_RCB {};
  

decl_list: 
  field_decl decl_list {} |

  TOKEN_VOIDTYPE id TOKEN_LP args TOKEN_RP {$6 = $1;} block method_decls1 {
    int index = findIndex(funcList , $2);
    if(index == -1){
      struct func temp;
      temp.name = $2;
      temp.type = $1;
      temp.arguments.push_back($4.begin() , $4.end());
      funcList.push_back(temp);
    }
    else{
      cout << yylineno << " : $2 already defind" << endl;
      exit(-1);
    }
  } | 
   
  type id TOKEN_LP args TOKEN_RP {$6 = $1;} block method_decls1 {
    int index = findIndex(funcList , $2);
    if(index == -1){
      struct func temp;
      temp.name = $2;
      temp.type = $1;
      temp.arguments.push_back($4.begin() , $4.end());
      funcList.push_back(temp);
    }
    else{
      cout << yylineno << " : $2 already defind" << endl;
      exit(-1);
    }
  } | 

  main_decl method_decls {};




/*============================field decleration============================*/
field_decl : 
  type {$2 = $1;} variables TOKEN_SEMICOLON {};


variables : 
  {$1 = $$;} variable |
  {$1 = $$;} variable TOKEN_COMMA {$3 = $$;} variables ;


variable :  
  id {
    struct var temp;
    temp.name = $1;
    temp.type = $$;
    temp.isArray = 0;
    varList.push_back(temp);
  } | 

  id TOKEN_LB int_literal TOKEN_RB {
    if($3 > 0){
      struct var temp;
      temp.name = $1;
      temp.type = $$;
      temp.isArray = 1;
      temp.size = $3;
    }
    else{
      cout << yylineno << " : array size must be more than zero" << endl;
    }
  };





/*============================method decleration============================*/
method_decls : {} | 
  method_decl method_decls {};

method_decls1:
  method_decl method_decls1 {} |
  main_decl method_decls {};

method_decl : 
  method_type id TOKEN_LP args TOKEN_RP {$6 = $1;} block {
    int index = findIndex(funcList , $2);
    if(index == -1){
      struct func temp;
      temp.name = $2;
      temp.type = $1;
      temp.arguments.push_back($4.begin() , $4.end());
      funcList.push_back(temp);
    }
    else{
      cout << yylineno << " : $2 already defind" << endl;
      exit(-1);
    }
  };

main_decl:
  TOKEN_VOIDTYPE TOKEN_MAINFUNC TOKEN_LP TOKEN_RP block {};

method_type : 
  type {$$ = $1;} |
  TOKEN_VOIDTYPE {$$ = $1;};

args : {} |
  arg {$$.push_back($1);} |
  arg TOKEN_COMMA args {$$.push_back($1); $$.pushback($3.begin() , $3.end());};


arg : 
  type id {$$ = $1;};


/*============================block============================*/
block: TOKEN_LCB var_decls {$3.type = $$; $3.value = ($$ == "void");} statements TOKEN_RCB {
  if(!$3.value)
    cout << yylineno << " : method shoould return a value" << endl;   
};


/*============================variable decleration============================*/
var_decls: {} | 
  var_decl var_decls {};

var_decl: 
  type {$2 = $1;} ids TOKEN_SEMICOLON;

ids: 
  id  {
    int index = findIndex(varList , $1);
    if(index == -1){
      struct var temp;
      temp.name = $1;
      temp.type = $$;
      temp.isArray = 0;
      varList.push_back(temp);
    }
    else{
      cout << yylineno << " : $1 already defind" << endl;
      exit(-1);
    }
  } | 
  
  id TOKEN_COMMA {$3 = $$;} ids {
    int index = findIndex(varList , $1);
    if(index == -1){
      struct var temp;
      temp.name = $1;
      temp.type = $$;
      temp.isArray = 0;
      varList.push_back(temp);
    }
    else{
      cout << yylineno << " : $1 already defind" << endl;
      exit(-1);
    }
  };



/*============================type============================*/
type: 
  TOKEN_INTTYPE {$$ = "int";} | 
  TOKEN_BOOLEANTYPE {$$ = "bool";};



/*============================statement============================*/
statements: {} | 
  {$1 = $$;} statement statements {if($1.value) $$.value = 1; };

statement: 
  location TOKEN_ASSIGNOP expr TOKEN_SEMICOLON {
    if($3.type == $1.type)
      *$1.value = $3.value;
    else{
      cout << yylineno << " : types do not match" << endl;
    }
  } |

  location TOKEN_MINUSASSIGNOP expr TOKEN_SEMICOLON {
    if($3.type == "int" && $1.type == "int")
      *$1.value -= $3.value;
    else{
      cout << yylineno << " : expected integer location and expression" << endl;
    }
  } |

  location TOKEN_PLUSASSIGNOP expr TOKEN_SEMICOLON {
    if($3.type == "int" && $1.type == "int")
      *$1.value += $3.value;
    else{
      cout << yylineno << " : expected integer location and expression" << endl;
    }
  } |
  
  method_call TOKEN_SEMICOLON {} |

  TOKEN_IFCONDITION TOKEN_LP expr TOKEN_RP {$5 = "void";} block else_block {
    if($4.type != "bool"){
      cout << "expected boolean type expression in line : " << yylineno << endl;
      exit(-1);
    }
  } |
  
  TOKEN_LOOP id TOKEN_ASSIGNOP expr TOKEN_COMMA expr {$7 = "void";} block {
    if($4.type != "int" || $6.type != "int"){
      cout << "expected integer type expression in line : " << yylineno << endl;
      exit(-1);
    }
  } |
  
  TOKEN_RETURN expr TOKEN_SEMICOLON {
    if($$.type != $2.type){
      cout << yylineno << " : method return type do not match the returned expression" << endl;
      exit(-1)
    }
    else
      $$.value = 1;
  } |

  TOKEN_RETURN TOKEN_SEMICOLON {
    if($$.type != "void"){
      cout << yylineno << " : method should return a value" << endl;
      exit(-1);
    }
  } |
  
  TOKEN_BREAKSTMT TOKEN_SEMICOLON {} |
  
  TOKEN_CONTINUESTMT TOKEN_SEMICOLON {} |
  
  block {};

else_block: {} |  
  TOKEN_ELSECONDITION block {};



/*============================method call============================*/
method_call: 
  method_name TOKEN_LP exprs TOKEN_RP {
    int temp = findIndex(funcList , $1)
    if(temp == -1){
      cout << "method has not been declared\n";
      exit(-1)
    }
    else{
      $$.value = 0;
      $$.type = funcListp[temp].type;
    }
  } | 
  
  TOKEN_CALLOUT TOKEN_LP string_literal TOKEN_COMMA callout_args TOKEN_RP 
    {$$.type = "int" $$.value = 0;} | 
  
  TOKEN_CALLOUT TOKEN_LP string_literal TOKEN_RP 
    {$$.type = "int" $$.value = 0;}; 



/*============================method name============================*/
method_name: 
  id {$$ = $1;};


/*============================location============================*/
location: 
  id  {
    int temp = findIndex(varList , $1);
    if(temp == -1){
      cout << yylineno << " : " << $1 << " is not declared" << endl;
      exit(-1);
    }
    else if(varList[temp].isArray){
      $$.value = &varList[temp].size;
      $$.type = varList[temp].type;
    }
    else{
      cout << yylineno << " : " << $1 << " is an array" << endl;
      exit(-1);
    }
  } | 

  id TOKEN_LB expr TOKEN_RB {
    if($3.type != "int"){
      cout << "expected integer type expression in line : " << yylineno << endl;
      exit(-1);
    }
    int temp = findIndex(varList , $1);
    if(temp == -1){
      cout << yylineno << " : " << $1 << " is not declared" << endl;
      exit(-1);
    }
    else if(!varList[temp].isArray){
      cout << yylineno << " : " << $1 << " is not an array" << endl;
      exit(-1);
    }
    else if($3.value >= varList[temp].size){
      cout << "out of range index in line : " << yylineno << endl;
      exit(-1);
    }
    else{
      $$.value = &varList[temp].values[$3.value];
      $$.type = varList[temp].type;
    }
  };


/*============================expression============================*/
exprs: {} | 
  expr {$$.push_back($1.type);} |
  expr TOKEN_COMMA exprs {$$.push_back($1.type) , $$.push_back($3.begin() , $3.end())};

expr : 
  expr TOKEN_OROP expr1 {
    if($1.type == "bool" && $3.type == "bool"){
      $$.type = "bool";
      $$.value = $1 || $3;
    }
    else{
      cout << "expected boolean type expressions in line : " << yylineno << endl;
      exit(-1)
    }
  } |
  expr1 {$$ = $1;};

expr1: 
  expr1 TOKEN_ANDOP expr2 {
    if($1.type == "bool" && $3.type == "bool"){
      $$.type = "bool";
      $$.value = $1 && $3;
    }
    else{
      cout << "expected boolean type expressions in line : " << yylineno << endl;
      exit(-1)
    }
  } |
  expr2 {$$ = $1;};

expr2:
  expr2 TOKEN_EQUALITYOP expr3 {
    if($1.type == $3.type){
      if($1.type == "bool" || $1.type == "int"){
        $$.type = $1.type;
        $$.value = $1 == $3;
      }
      else{
        cout << "expected boolean or int expressions in line : " << yylineno << endl;
        exit(-1);
      }
    }
    else{
      cout << "expressions types do not match in line : " << yylineno << endl;
      exit(-1)
    }
  } |
  expr2 TOKEN_NONEQUALITYOP expr3 {
    if($1.type == $3.type){
      if($1.type == "bool" || $1.type == "int"){
        $$.type = $1.type;
        $$.value = $1 != $3;
      }
      else{
        cout << "expected boolean or int expressions in line : " << yylineno << endl;
        exit(-1);
      }
    }
    else{
      cout << "expressions types do not match in line : " << yylineno << endl;
      exit(-1)
    }
  } |
  expr3 {$$ = $1;};

expr3:
  expr3 TOKEN_GEQOP expr4 {
    if($1.type == "int" && $3.type == "int"){
      $$.type = "bool";
      $$.value = $1 >= $3;
    }
    else{
      cout << "expected integer type expressions in line : " << yylineno << endl;
      exit(-1)
    }
  } |
  expr3 TOKEN_LEQOP expr4 {
    if($1.type == "int" && $3.type == "int"){
      $$.type = "bool";
      $$.value = $1 <= $3;
    }
    else{
      cout << "expected integer type expressions in line : " << yylineno << endl;
      exit(-1)
    }
  } |
  expr3 TOKEN_GREATEROP expr4 {
    if($1.type == "int" && $3.type == "int"){
      $$.type = "bool";
      $$.value = $1 > $3;
    }
    else{
      cout << "expected integer type expressions in line : " << yylineno << endl;
      exit(-1)
    }
  } |
  expr3 TOKEN_LESSOP expr4 {
    if($1.type == "int" && $3.type == "int"){
      $$.type = "bool";
      $$.value = $1 < $3;
    }
    else{
      cout << "expected integer type expressions in line : " << yylineno << endl;
      exit(-1)
    }
  } |
  expr4 {$$ = $1;};

expr4:
  expr4 TOKEN_PLUSOP expr5 {
    if($1.type == "int" && $3.type == "int"){
      $$.type = "int";
      $$.value = $1 + $3;
    }
    else{
      cout << "expected integer type expressions in line : " << yylineno << endl;
      exit(-1)
    }
  } |
  expr4 TOKEN_MINUSOP expr5 {
    if($1.type == "int" && $3.type == "int"){
      $$.type = "int";
      $$.value = $1 - $3;
    }
    else{
      cout << "expected integer type expressions in line : " << yylineno << endl;
      exit(-1)
    }
  } |
  expr5 {$$ = $1;};

expr5:
  expr5 TOKEN_MODULSOP expr6 {
    if($1.type == "int" && $3.type == "int"){
      $$.type = "int";
      $$.value = $1 % $3;
    }
    else{
      cout << "expected integer type expressions in line : " << yylineno << endl;
      exit(-1)
    }
  } |
  expr5 TOKEN_MULTIPLEOP expr6 {
    if($1.type == "int" && $3.type == "int"){
      $$.type = "int";
      $$.value = $1 * $3;
    }
    else{
      cout << "expected integer type expressions in line : " << yylineno << endl;
      exit(-1)
    }
  } |
  expr5 TOKEN_DIVISIONOP expr6 {
    if($1.type == "int" && $3.type == "int"){
      $$.type = "int";
      if($3.value == 0)
        cout << "WARNING : division by zero in line : " << yylineno << endl;
      $$.value = $1 / $3;
    }
    else{
      cout << "expected integer type expressions in line : " << yylineno << endl;
      exit(-1)
    }
  } |
  expr6 {$$ = $1;};

expr6: 
  TOKEN_MINUSOP expr7 {
    if($2.type == "int"){
      $$.type = "int";
      $$.value = -$2;
    }
    else{
      cout << "expected integer type expressions in line : " << yylineno << endl;
      exit(-1)
    }
  } |
  expr7 {$$ = $1;};

expr7:
  TOKEN_LOGICOP expr8 {
    if($2.type == "bool"){
      $$.type = "bool";
      $$.value = !$2;
    }
    else{
      cout << "expected boolean type expressions in line : " << yylineno << endl;
      exit(-1)
    }
  } |
  expr8 {$$ = $1;};


expr8:
  location {$$.type = $1.type; $$.value == *$1.value} |
  method_call {
    if($1.type != "void") 
      $$ = $1; 
    else{
      cout << yylineno << " method with type void cannot be used in an expression" << endl;
    }
  } |
  literal {$$ = $1;} |
  TOKEN_LP expr TOKEN_RP {$$ = $2;};


/*============================callout argument============================*/
callout_args: {} |
  callout_arg {} |
  callout_arg TOKEN_COMMA callout_args {};

callout_arg: 
  expr {} | 
  string_literal {};


/*============================literal============================*/
literal: 
  int_literal {$$.type = "int"; $$.value = $1;} | 
  char_literal {$$.type = "int"; $$.value = $1;} | 
  bool_literal {$$.type = "int"; $$.value = $1;};


/*============================id============================*/
id: 
  TOKEN_ID {$$ = $1;};

/*============================int literal============================*/
int_literal: 
  deciamal_literal {$$ = $1;} | 
  hex_literal {$$ = $1;};

/*============================decimal literal============================*/
deciamal_literal: 
  TOKEN_DECIMALCONST {$$ = $1;};

/*============================hex literal============================*/
hex_literal: 
  TOKEN_HEXADECIMALCONST {$$ = $1;};

/*============================bool literal============================*/
bool_literal: 
  TOKEN_BOOLEANCONST {$$ = $1;};

/*============================char literal============================*/
char_literal: 
  TOKEN_CHARCONST {$$ = $1;};

/*============================string literal============================*/
string_literal: 
  TOKEN_STRINGCONST {$$ = $1;};
%%


int main(int argc, char **argv){
  input = atol(argv[1]);
  FILE * fr = fopen("input.xlang" , "r");
  yyin = fr;
  yyparse();

  cout << endl;
}

void yyerror(const char *s){
  printf("%s in line %d\n", s , yylineno);
  exit(-1);
}

int findIndex(vector<var> list , string name){
  for(int i = 0; i < list.size(); i++)
    if(list[i].name == name)
      return i;
    return -1;
}
int findIndex(vector<func> list , string name){
  for(int i = 0; i < list.size(); i++)
    if(list[i].name == name)
      return i;
    return -1;
}

//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
