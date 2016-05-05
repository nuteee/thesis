/* ....... */
ROUTE	"<route"
/* .......*/
{ROUTE}{WS}{INT}{WS}{INT}({WS}{INT})*	{
				  int size{0};
				  int ss{0};
				  int sn{0};				  
				  
				  std::sscanf(yytext, "<route %d %d%n", &size, &m_id, &sn);
				  ss += sn;
				  for(int i{0}; i<size; ++i)
				  {
				    unsigned int u{0u};
				    std::sscanf(yytext+ss, "%u%n", &u, &sn);
				    route.push_back(u);
				    ss += sn; 				    
				  }
				  m_cmd = 101;
				}