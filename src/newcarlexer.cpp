/* .......*/
INNERROUTE	"<innerroute"
/* .......*/
{INNERROUTE}{WS}{INT}{WS}{INT}	{
				  std::sscanf(yytext, "<innerroute %d %u>", &m_id, &to);
				  
				  m_cmd = 102;
				}