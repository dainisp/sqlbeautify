//#define BOOST_SPIRIT_DEBUG
/*
#include <boost/spirit/include/qi.hpp>
#include <boost/spirit/include/qi_symbols.hpp>
#include <boost/spirit/include/qi_list.hpp>

#include <boost/spirit/include/phoenix_core.hpp>
#include <boost/spirit/include/phoenix_container.hpp>
#include <boost/spirit/include/phoenix_statement.hpp>
#include <boost/spirit/include/phoenix_operator.hpp>
#include <boost/spirit/include/phoenix_object.hpp>

#include <boost/spirit/include/support_container.hpp>
#include <boost/spirit/include/support_utree.hpp>
*/
//#include <vector>
#include <boost/spirit/include/support_utree.hpp>
#include <boost/spirit/home/x3.hpp>



/*

enum
{

op_plus,
op_multi,
op_minus,
op_divide,
func_sin,
func_cos,
func_exp,
func_tg,
func_lg,
func_ln,
func_sqrt
};
*/


//using boost::spirit::qi::_val;
//using boost::spirit::qi::_1;
/*
using boost::spirit::qi::_2;
using boost::spirit::qi::double_;
using boost::phoenix::push_back;
*/
//using boost::spirit::qi::symbols;
namespace x3 = boost::spirit::x3;

using x3::lit;
using x3::int_;
using x3::lexeme;
using x3::alpha;
using x3::alnum;
using x3::print;
//using boost::spirit::ascii::space;
using x3::as_string;
using x3::attr;
//using boost::spirit::ascii::no_case;
//using boost::phoenix::construct;



/*

funcnames.add
             ("sin",func_sin)
             ("cos",func_cos)
             ("exp",func_exp)
             ("tg",func_tg)
             ("lg",func_lg)
             ("ln",func_ln)
              ("sqrt",func_sqrt)
              ;
*/




        x3::rule<class condition, boost::spirit::utree::list_type> const condition("condition");

 x3::rule<class select_list, boost::spirit::utree::list_type> const select_list("select_list");
 x3::rule<class orless_logical_term, boost::spirit::utree::list_type> const orless_logical_term("orless_logical_term");
//boost::spirit::qi::symbols<char, int> funcnames;
  x3::rule<class comparison_op> const comparison_op("comparison_op");

 // boost::spirit::qi::rule<Iterator, boost::spirit::ascii::space_type,std::string()>
  x3::rule<class package_name,boost::spirit::utf8_string_type> const package_name("package_name");
 x3::rule<class column_name,boost::spirit::utf8_string_type> const  column_name("column_name");
 x3::rule<class link_name,boost::spirit::utf8_string_type> const  link_name("link_name");
 x3::rule<class table_name,boost::spirit::utf8_string_type> const table_name("table_name");
 x3::rule<class identifier,boost::spirit::utf8_string_type> const identifier("identifier");
 x3::rule<class table_named,boost::spirit::utf8_string_type> const table_named("table_named");
 x3::rule<class schema_name,boost::spirit::utf8_string_type> const schema_name("schema_name");
 x3::rule<class quoted_string,boost::spirit::utf8_string_type> const quoted_string("quoted_string");
//boost::spirit::qi::rule<Iterator, boost::spirit::ascii::space_type,boost::spirit::utf8_string_range_type()> table_reference_list;
//boost::spirit::qi::rule<Iterator, boost::spirit::ascii::space_type,std::vector<boost::spirit::utree>() > table_reference_list;
//boost::spirit::qi::rule<Iterator, boost::spirit::ascii::space_type,boost::iterator_range<boost::spirit::utree::iterator>() > table_reference_list;
//boost::spirit::qi::rule<Iterator, boost::spirit::ascii::space_type,boost::spirit::utree() > table_reference_list;

x3::rule<class alias,boost::spirit::utree> const alias("alias");
x3::rule<class char_function,boost::spirit::utree> const char_function("char_function");
x3::rule<class column_spec,boost::spirit::utree> const column_spec("column_spec");
x3::rule<class connect_clause,boost::spirit::utree> const connect_clause("connect_clause");
x3::rule<class displayed_column,boost::spirit::utree> const displayed_column("displayed_column");
x3::rule<class conversion_function,boost::spirit::utree> const conversion_function("conversion_function");
x3::rule<class delete_command,boost::spirit::utree> const delete_command("delete_command");
x3::rule<class exp_set,boost::spirit::utree> const exp_set("exp_set");
x3::rule<class exp_simple,boost::spirit::utree> const exp_simple("exp_simple");
x3::rule<class expression,boost::spirit::utree> const expression("expression");
x3::rule<class expression_list,boost::spirit::utree> const expression_list("expression_list");
x3::rule<class factor,boost::spirit::utree> const factor("factor");
x3::rule<class factor2,boost::spirit::utree> const factor2("factor2");
x3::rule<class afunction,boost::spirit::utree> const afunction("afunction");
x3::rule<class greatr,boost::spirit::utree> const greatr("greatr");
x3::rule<class group_clause,boost::spirit::utree> const group_clause("group_clause");
x3::rule<class group_function,boost::spirit::utree> const group_function("group_function");
x3::rule<class aidentifier,boost::spirit::utree> const aidentifier("aidentifier");
x3::rule<class keyword,boost::spirit::utree> const keyword("keyword");
x3::rule<class logical_factor,boost::spirit::utree> const logical_factor("logical_factor");
x3::rule<class logical_term,boost::spirit::utree> const logical_term("logical_term");
x3::rule<class anot_eq,boost::spirit::utree> const anot_eq("anot_eq");
x3::rule<class number_function,boost::spirit::utree> const number_function("number_function");
x3::rule<class order_clause,boost::spirit::utree> const order_clause("order_clause");
x3::rule<class other_function,boost::spirit::utree> const other_function("other_function");
x3::rule<class pseudo_column,boost::spirit::utree> const pseudo_column("pseudo_column");
x3::rule<class quantified_factor,boost::spirit::utree> const quantified_factor("quantified_factor");
x3::rule<class select_command,boost::spirit::utree> const select_command("select_command");
x3::rule<class select_expression,boost::spirit::utree> const select_expression("select_expression");
x3::rule<class select_statement,boost::spirit::utree> const select_statement("select_statement");
x3::rule<class selected_table,boost::spirit::utree> const selected_table("selected_table");
x3::rule<class set_clause,boost::spirit::utree> const set_clause("set_clause");
x3::rule<class table_spec,boost::spirit::utree> const table_spec("table_spec");
x3::rule<class simple_update,boost::spirit::utree> const simple_update("simple_update");
x3::rule<class sorted_def,boost::spirit::utree> const sorted_def("sorted_def");
x3::rule<class sql_command,boost::spirit::utree> const sql_command("sql_command");
x3::rule<class sql_literal,boost::spirit::utree> const sql_literal("sql_literal");
x3::rule<class start,boost::spirit::utree> const start("start");
x3::rule<class subquery,boost::spirit::utree> const subquery("subquery");
x3::rule<class subquery_update,boost::spirit::utree> const subquery_update("subquery_update");
x3::rule<class table_alias,boost::spirit::utree> const table_alias("table_alias");
x3::rule<class table_reference_list,boost::spirit::utree> const table_reference_list("table_reference_list");
x3::rule<class term,boost::spirit::utree> const term("term");
x3::rule<class to_modify_data,boost::spirit::utree> const to_modify_data("to_modify_data");
x3::rule<class update_clause,boost::spirit::utree> const update_clause("update_clause");
x3::rule<class update_command,boost::spirit::utree> const update_command("update_command");
x3::rule<class user_defined_function,boost::spirit::utree> const user_defined_function("user_defined_function");
x3::rule<class variable,boost::spirit::utree> const variable("variable");
x3::rule<class where_condition,boost::spirit::utree> const where_condition("where_condition");




//start= sql_command >> -lit(';');
auto const sqlgramm = x3::grammar(
"sqlgramm",
       start = select_expression >>  -lit(';'),
//start = schema_name ;

  //sak

      sql_command=

        to_modify_data
    ,

       to_modify_data=
        select_command
        | update_command
        | delete_command

    ,

     select_command
    =
        select_statement % no_case[lit("union")]
    ,

      select_statement
    =
       lit('(')  >> select_command >> lit(')')
        | select_expression
    ,


     select_expression
 =
      no_case[lit("select") >> -( lit("all") | lit("distinct") ) >> select_list
      >> lit("from") >> table_reference_list]

      >> -( no_case[lit("where")] >> where_condition )
      >>  -connect_clause
      >>  -group_clause
      >>  -set_clause
       >>  -order_clause
      >>  -update_clause

    ,

     select_list =  ( attr("select_list") >>  displayed_column % lit(','))
        | lit('*')
    ,

     table_reference_list=
//boost::spirit::qi::as<boost::spirit::qi::>()[
selected_table % lit(',')
//]

    ,

     where_condition=
     attr("where_condition") >>    condition,

    ,

     displayed_column
      =
      (
       exp_simple >> -alias
      | attr("displayed_column") >> schema_name  >>    table_name >> lit('.') >> ( column_name |  lit('*'))
      | attr("displayed_column") >>  table_name >> lit('.') >> ( column_name |  lit('*'))

      )
    ,

     schema_name
      = identifier >> lit('.'),



     table_name
      = identifier,


     table_named =
    table_name  >> lit('.'),


     exp_simple =  attr("expres_simple") >> expression ,

     expression
      = term >> *( ( lit('+') | lit('-') ) >> term )
    ,

     alias
      =  -lit("as") >> (identifier -  no_case[(lit("where") | lit("from") | lit("group") )]  )
    ,

     term
      =  attr("term") >> factor >> *( ( lit('*') | lit('/') ) >> factor )
    ,



     factor
      = factor2 >> *( lit('|') >> lit('|') >> factor2 )
    ,

     factor2
      =   sql_literal
      | ( lit('+') | lit('-') ) >> expression
      | afunction >> ( lit('(') >>   expression % lit(',')   >> lit(')') )
      | group_function >> lit('(') >> -( no_case[lit('*') | lit("all") | lit("distinct")] ) >> -expression >> lit(')')
      | user_defined_function >> ( lit('(') >> expression  % lit(',')   >> lit(')') )
      |  lit('(') >> expression >> lit(')')
      |  variable
      | expression_list
    ,

     expression_list = lit('(') >> expression >> +( lit(',') >> expression ) >> lit(')') ,

     sql_literal=
        ( int_ | quoted_string | no_case[lit("null")] )

    ,

     variable
    =
         column_spec >> ( lit('(') >> lit('+') >> lit(')') )
        | attr("single_col") >> column_spec
    ,

     column_spec
    =
    schema_name  >> table_named  >> column_name
    | table_named  >> column_name

    |     column_name
    ,

     user_defined_function
      = -( -schema_name  >> package_name >> lit('.') ) >> identifier
    ,

     package_name = identifier,

     column_name = identifier,

     afunction
      =
      number_function
      | char_function
      | conversion_function
      | other_function
    ,

     number_function
      =
      no_case[lit("abs") | lit("ceil") | lit("floor") | lit("mod") | lit("power") | lit("round")
      | lit("sign") | lit("sqrt") | lit("trunc")]
    ,




// beig



     char_function
      =
      no_case[lit("chr") | lit("initcap") | lit("lower") | lit("lpad") | lit("ltrim") | lit("replace")
      | lit("rpad") | lit("rtrim") | lit("soundex") | lit("substr") | lit("translate") | lit("upper")
      | lit("ascii") | lit("instr") | lit("length")
      | lit("concat")]
    ,

     group_function
      =
      no_case[lit("avg") | lit("count") | lit("max") | lit("min") | lit("stddev") | lit("sum")
      | lit("variance")]
    ,

     conversion_function
      =
      no_case[lit("chartorowid") | lit("convert") | lit("hextoraw") | lit("rawtohex") | lit("rowidtochar")
      | lit("to_char") | lit("to_date") | lit("to_number")]
    ,

     other_function
      =
      no_case[lit("decode") | lit("dump") | lit("greatest") | lit("least") | lit("nvl")
      | lit("uid") | lit("userenv") | lit("vsize")]
    ,

// This is not being used currently, but might be useful at some point.
     pseudo_column
    =
        no_case[lit("user") | lit("sysdate")]
    ,

     selected_table
      =
      attr("selected_table") >> ( table_spec | subquery ) >>  -alias
    ,

     table_spec
    =
      -schema_name  >> table_name >> -( lit('@') >> link_name )
    ,


     table_alias
    =
      -schema_name  >> table_name >> -( lit('@') >> link_name ) >> -alias
    ,

     link_name
      = identifier,

     condition =

logical_term >> +( lit("or") >> logical_term )
| orless_logical_term
,
     logical_term
      = logical_factor %  no_case[lit("and")]
    ,

      orless_logical_term
      = ( attr("orless_factor") >> logical_factor) % no_case[lit("and")]
    ,



     logical_factor
      =

         -no_case[lit("prior")] >>  exp_simple >> comparison_op >>  -no_case[lit("prior")] >> exp_simple
      |  no_case[exp_simple >> -lit("not") >> lit("in") >> exp_set]
      |  no_case[exp_simple >> -lit("not") >> lit("like")]
      | no_case[ exp_simple >> -lit("not") >> lit("like") >> expression >> -( lit("escape") >> quoted_string )]
      | no_case[ exp_simple >> -lit("not") >> lit("between")]
	  | no_case[exp_simple >> lit("not") >> lit("between") >> exp_simple >> lit("and") >> exp_simple]
      |  no_case[exp_simple >> lit("is") >> -lit("not") >> lit("null")]
      |  quantified_factor
      |  no_case[lit("not")] >> condition
      |  lit('(') >> condition >> lit(')')
    ,


     quantified_factor
      =
       exp_simple >> comparison_op >> -no_case[( lit("all") | lit("any") )] >> subquery
      |  no_case[ -lit("not")  >> lit("exists")] >> subquery
      | subquery
    ,

     comparison_op
      =
     (  attr("op_equal") >> lit('=') ) | lit('<') | greatr | anot_eq | lit("<=") | lit(">=")
    ,




     exp_set
      =  exp_simple
      | subquery
    ,






     subquery
    =
        lit('(') >> select_command  >> lit(')')

    ,

     connect_clause
      =
      -no_case[( lit("start") >> lit("with") >> condition )]
      >> no_case[lit("connect") >> lit("by")]
      >>  condition
      >> -( no_case[lit("start") >> lit("with")] >> condition )
    ,

     group_clause
      =
     no_case[lit("group") >> lit("by")] >> attr("group_clause")   >> expression  >> *( lit(',') >> expression ) >> -( no_case[lit("having")] >> condition )
    ,


     set_clause
      =
      no_case[( ( lit("union") >> lit("all") ) | lit("intersect") | lit("minus") )] >> attr("set_clause")   >> select_command
    ,






     order_clause
      =
      no_case[lit("order") >> lit("by")] >> sorted_def >>  *( lit(',') >> sorted_def )
    ,

     sorted_def
      =
      ( expression |  int_ ) >> -( no_case[lit("asc") | lit("desc")] )
    ,

     update_clause
      =
      no_case[lit("for") >> lit("update") >> -( lit("of") >> column_name % lit(',')  )  >>  -lit("nowait")]
    ,


     delete_command
      =
      no_case[lit("delete") >>  -lit("from") >> table_alias >> -( lit("where") >> condition )]
    ,

     update_command
    =
        subquery_update
        | simple_update
    ,

     simple_update
      =
        no_case[lit("update") >> table_alias >>
       lit("set") >> column_spec >> lit('=') >> (  expression | subquery )
	 >>  *( lit(',') >>  column_spec >> lit('=') >> (  expression | subquery ) )
     >>  lit("where")] >> condition
    ,

     subquery_update
      =
      no_case[lit("update") >> table_alias >>
      lit("set") >> lit('(') >> (column_spec %  lit(',') ) >> lit(')')
	  >> lit('=') >>  subquery
      >>  lit("where")] >> condition
    ,


     aidentifier=
        ( identifier | quoted_string | keyword )


    ,



     keyword
    =
     no_case[lit("abs")
        | lit("ascii")
        | lit("ceil")
        | lit("chartorowid")
        | lit("chr")
        | lit("concat")
        | lit("convert")
        | lit("count")
        | lit("decode")
        | lit("dump")
        | lit("floor")
        | lit("greatest")
        | lit("hextoraw")
        | lit("initcap")
        | lit("instr")
        | lit("intersect")
        | lit("least")
        | lit("length")
        | lit("lower")
        | lit("lpad")
        | lit("ltrim")
        | lit("max")
        | lit("min")
        | lit("minus")
        | lit("mod")
        | lit("not")
        | lit("nowait")
        | lit("nvl")
        | lit("power")
        | lit("prior")
        | lit("rawtohex")
        | lit("replace")
        | lit("round")
        | lit("rowidtochar")
        | lit("rpad")
        | lit("rtrim")
        | lit("sign")
        | lit("soundex")
        | lit("sqrt")
        | lit("stddev")
        | lit("substr")
        | lit("sum")
        | lit("sysdate")
        | lit("to_char")
        | lit("to_date")
        | lit("to_number")
        | lit("translate")
        | lit("trunc")
        | lit("uid")
        | lit("upper")
        | lit("userenv")
        | lit("variance")
        | lit("vsize")]
    ,



     identifier
    =
        lexeme[alpha >> *(alnum  | lit('_') | lit('$') | lit('#') )]
           ,


     quoted_string
      = lexeme[lit('\'') >>  *(    (lit("''") | print | space)    - lit('\'')  ) >> lit('\'')]
    ,



     anot_eq =
            lit('<') >>
                -( lit('>')
                    |   lit('='))
        | lit("!=") | lit("^=")
    ,

     greatr = lit('>') >> -lit('=') );
/*
BOOST_SPIRIT_DEBUG_NODE( afunction );
BOOST_SPIRIT_DEBUG_NODE( aidentifier );
BOOST_SPIRIT_DEBUG_NODE( alias );
BOOST_SPIRIT_DEBUG_NODE( anot_eq );
BOOST_SPIRIT_DEBUG_NODE( char_function );
BOOST_SPIRIT_DEBUG_NODE( column_name );
BOOST_SPIRIT_DEBUG_NODE( column_spec );
BOOST_SPIRIT_DEBUG_NODE( comparison_op );
BOOST_SPIRIT_DEBUG_NODE( condition );
BOOST_SPIRIT_DEBUG_NODE( connect_clause );
BOOST_SPIRIT_DEBUG_NODE( conversion_function );
BOOST_SPIRIT_DEBUG_NODE( delete_command );
BOOST_SPIRIT_DEBUG_NODE( displayed_column );
BOOST_SPIRIT_DEBUG_NODE( exp_set );
BOOST_SPIRIT_DEBUG_NODE( exp_simple );
BOOST_SPIRIT_DEBUG_NODE( expression );
BOOST_SPIRIT_DEBUG_NODE( expression_list );
BOOST_SPIRIT_DEBUG_NODE( factor );
BOOST_SPIRIT_DEBUG_NODE( factor2 );
BOOST_SPIRIT_DEBUG_NODE( greatr );
BOOST_SPIRIT_DEBUG_NODE( group_clause );
BOOST_SPIRIT_DEBUG_NODE( group_function );
BOOST_SPIRIT_DEBUG_NODE( identifier );
BOOST_SPIRIT_DEBUG_NODE( keyword );
BOOST_SPIRIT_DEBUG_NODE( link_name );
BOOST_SPIRIT_DEBUG_NODE( logical_factor );
BOOST_SPIRIT_DEBUG_NODE( logical_term );
BOOST_SPIRIT_DEBUG_NODE( number_function );
BOOST_SPIRIT_DEBUG_NODE( order_clause );
BOOST_SPIRIT_DEBUG_NODE( other_function );
BOOST_SPIRIT_DEBUG_NODE( package_name );
BOOST_SPIRIT_DEBUG_NODE( pseudo_column );
BOOST_SPIRIT_DEBUG_NODE( quantified_factor );
BOOST_SPIRIT_DEBUG_NODE( quoted_string );
BOOST_SPIRIT_DEBUG_NODE( schema_name );
BOOST_SPIRIT_DEBUG_NODE( select_command );
BOOST_SPIRIT_DEBUG_NODE( select_expression );
BOOST_SPIRIT_DEBUG_NODE( select_list );
BOOST_SPIRIT_DEBUG_NODE( select_statement );
BOOST_SPIRIT_DEBUG_NODE( selected_table );
BOOST_SPIRIT_DEBUG_NODE( set_clause );
BOOST_SPIRIT_DEBUG_NODE( simple_update );
BOOST_SPIRIT_DEBUG_NODE( sorted_def );
BOOST_SPIRIT_DEBUG_NODE( sql_command );
BOOST_SPIRIT_DEBUG_NODE( sql_literal );
BOOST_SPIRIT_DEBUG_NODE( subquery );
BOOST_SPIRIT_DEBUG_NODE( subquery_update );
BOOST_SPIRIT_DEBUG_NODE( table_alias );
BOOST_SPIRIT_DEBUG_NODE( table_name );
BOOST_SPIRIT_DEBUG_NODE( table_reference_list );
BOOST_SPIRIT_DEBUG_NODE( table_spec );
BOOST_SPIRIT_DEBUG_NODE( term );
BOOST_SPIRIT_DEBUG_NODE( to_modify_data );
BOOST_SPIRIT_DEBUG_NODE( update_clause );
BOOST_SPIRIT_DEBUG_NODE( update_command );
BOOST_SPIRIT_DEBUG_NODE( user_defined_function );
BOOST_SPIRIT_DEBUG_NODE( variable );
BOOST_SPIRIT_DEBUG_NODE( where_condition );
BOOST_SPIRIT_DEBUG_NODE( orless_logical_term);

*/









