#include <iostream>
#include <mysqlx/xdevapi.h>

using namespace std;
using namespace ::mysqlx;

int main()
{
	Session session("localhost", 33060, "root", "root");
	Schema schema = session.getSchema("3SP");
	Table gradebookTable = schema.getTable("gradebook");
	Row row = gradebookTable.select().where("name='Hyejin Kim'").execute().fetchOne();
	cout << "Your name: " << row.get(0) << endl;
	cout << "Your grade: " << row.get(1) << endl;

	gradebookTable.update().set("grade", "F").where("name='Hyejin Kim'").execute();
	cout << "It's hacked and your grade is F" << endl;
	
	return 0;
}


