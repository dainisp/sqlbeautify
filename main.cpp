//#include "utree.hpp"
#include "mygrammar.hpp"

//#include "simple_print.hpp"
#include <iostream>
#include <list>
#include <string>

/*
struct referenced_function : boost::spirit::function_base
{
referenced_function(){};
~referenced_function();

 boost::spirit::utree operator()(boost::spirit::utree const& env) const;
         boost::spirit::utree operator()(boost::spirit::utree& env) const;

        // Calling f.clone() must return a newly allocated function_base
        // instance that is equal to f.
        function_base* clone() const ;

};
*/

class calculator_visitor
{
public:
typedef double result_type;
//result_type rezultats;


double operator()(boost::spirit::utree::invalid_type) const
        {
            return 0;
          //  out << "nil";
        }


double operator()(boost::spirit::any_ptr) const
        {
            return 0;
          //  out << "nil";
        }
/*
double operator()(referenced_function&) const
        {
            return 0;
          //  out << "nil";
        }
*/
double operator()(boost::spirit::function_base&) const
        {
            return 0;
          //  out << "nil";
        }



/*

double operator()(referenced_function) const
        {
            return 0;
          //  out << "nil";
        }
*/

  double operator()(boost::spirit::utree::nil_type) const
        {
            return 0;
          //  out << "nil";
        }



 double operator()(bool b) const
        {
            return (double)b;
          //  out << (b ? "true" : "false");
        }



 double operator()(int i) const
        {
            return (double)i;
          //  out << (b ? "true" : "false");
        }



double operator()(double d) const
        {
            return d;
          //  out << (b ? "true" : "false");
        }

/*

        int operator()(boost::iterator_range & range) const
        {
            // This code works for both strings and lists
           // print_string_or_list(range, boost::is_pointer<Iterator>());

       int total =10;
 //boost::spirit::utree getops(range);

//for(int i=0;i<getops.size();i++)total += boost::spirit::utree::visit(getops[i],*this);

         //   print_string_or_list(range, boost::is_pointer<Iterator>());
        return total;




        }

*/


   template <typename Range> // for lists
        double print_string_or_list(Range range, boost::mpl::false_) const
        {
            typedef typename Range::const_iterator iterator;

double tottal;
int operation ;

            for (iterator i = range.begin(); i != range.end(); ++i)
            {
                if (i == range.begin())
                {
                operation = boost::spirit::utree::visit(*i, *this);
                 switch (operation)
                {
                    /*
                   case op_plus: tottal  =    0;
                    break;
                    case op_multi: tottal  =    1;
                    break;
                        case op_minus: tottal  =    0;
                    break;
                    case op_divide: tottal  =    1;
                    break;
                    */
                 default: tottal  =     0;
                }
                }


                else{//    (*this)(' ');

                switch (operation)
                {
  /*
                    case op_plus: tottal  +=    boost::spirit::utree::visit(*i, *this);
                    break;
                    case op_multi: tottal  *=    boost::spirit::utree::visit(*i, *this);
                    break;
                    case op_minus: tottal  -=    boost::spirit::utree::visit(*i, *this);
                    break;
                    case op_divide: tottal  /=    boost::spirit::utree::visit(*i, *this);
                    break;

                     case func_sin: tottal  =   sin(boost::spirit::utree::visit(*i, *this));
                    break;
                   case func_cos: tottal  =   cos(boost::spirit::utree::visit(*i, *this));
                    break;
                    case func_tg: tottal  =   tan(boost::spirit::utree::visit(*i, *this));
                    break;
                    case func_exp: tottal  =   exp(boost::spirit::utree::visit(*i, *this));
                    break;
                    case func_ln: tottal  =   log(boost::spirit::utree::visit(*i, *this));
                    break;
                    case func_lg: tottal  =   log10(boost::spirit::utree::visit(*i, *this));
                    break;
                    case func_sqrt: tottal  =   sqrt(boost::spirit::utree::visit(*i, *this));
                    break;
*/

                    default:  tottal  +=    boost::spirit::utree::visit(*i, *this);

                }
                }


                }
        return tottal;

            }






        template <typename Range> // for strings
        double print_string_or_list(Range range, boost::mpl::true_) const
        {
            typedef typename Range::const_iterator iterator;
            iterator i = range.begin();
          /*

            if (*i == '\1') // a 1 byte at the beginning signifies a byte string
            {
                out << "b"; ++i;
                out.width(2);
                out.setf('0');
                for (; i != range.end(); ++i)
                    out << std::hex << int((unsigned char)*i);
                out << std::dec;
            }
            else
            {
                bool const is_symbol = *i == '\0';  // a 0 byte at the beginning signifies a symbol
                if (!is_symbol)
                    out << '"';
                else
                    ++i;
                for (; i != range.end(); ++i)
                    out << *i;
                if (!is_symbol)
                    out << '"';
            }


            */
          return 3;
        }

        template <typename Iterator>
       double operator()(boost::iterator_range<Iterator> const& range) const
        {
            // This code works for both strings and lists
          return  print_string_or_list(range, boost::is_pointer<Iterator>());
        }











};

/*
        template <typename F>
        typename F::result_type
        static visit(utree& x, F f);
*/

/*
calculator_visitor::result_type   boost::spirit::utree::visit(const boost::spirit::utree& x,calculator_visitor vis)
{
//calculator_visitor::result_type rett;
return vis.rezultats;
}
*/


int main()
{
  // using boost::spirit::utree;
   // using boost::spirit::ulist;
 //   using ::detail::println;
//int  trez = 5;
//int intmas[] = {3,4,7};
//boost::spirit::detail::list   treelist;
//std::list<int> ints;
//ints.push_back(3);
//ints.push_back(4);
//ints.push_back(5);
//boost::iterator_range<std::list<int>::iterator> r(ints);
/*
template <typename Iter>
utree(boost::iterator_range<Iter> r)
*/

//
//std::cout << sizeof(intmas[3]) << std::endl;
//calculator_visitor myvis;
        boost::spirit::utree calculator((int)8);
   //     treelist.push_back(calculator);

// boost::iterator_range<std::list<boost::spirit::utree>::iterator> noderange;
 //boost::iterator_range<boost::spirit::utree> noderange;
  boost::spirit::x3::ascii::space_type space;

std::string inputstr(" select ali.id from table1 ali where ali.fu = 8 ");
//std::string
do{

  getline (std::cin, inputstr);

//std::cin >> inputstr;


 std::string::const_iterator iter = inputstr.begin();
        std::string::const_iterator end = inputstr.end();


    auto& calcgr = sqlgramm;

    boost::spirit::utree  calculator1;

     // calculator1.push_back(calculator);
     // calculator1.push_back((int)4);
  /*
     calcgr.funcnames.add
             ("sin",func_sin)
             ("cos",func_cos)
             ("exp",func_exp)
             ("tg",func_tg)
             ("lg",func_lg)
             ("ln",func_ln)
              ("sqrt",func_sqrt)
              ;
*/

bool r= phrase_parse(iter,end,calcgr,space,calculator1);

  if (r && iter == end)
     //   println(std::cout, val);
//std::cout << boost::spirit::utree::visit(calculator1,myvis) << std::endl;
std::cout << calculator1 << std::endl;
//printf("rezult:%d",  boost::spirit::utree::visit(calculator,myvis));
else
std::cout << "parse error" << std::endl;
}while (inputstr != "quit");


return 0;
}
