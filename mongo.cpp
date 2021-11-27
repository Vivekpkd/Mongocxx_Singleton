#include "mongo.h"
#include<iostream>
using bsoncxx::builder::stream::close_array;
using bsoncxx::builder::stream::close_document;
using bsoncxx::builder::stream::document;
using bsoncxx::builder::stream::finalize;
using bsoncxx::builder::stream::open_array;
using bsoncxx::builder::stream::open_document;
mongocxx::client& get_client()
{
	static mongocxx::client conn{ mongocxx::uri{ "your link" } };
	return conn;
}

int demo()
{
	
	mongocxx::client& conn1 = get_client();
	mongocxx::database db;
	db = conn1["ASSET_TRACKING"];
	db.create_collection("us11111");
	return 1;
}
