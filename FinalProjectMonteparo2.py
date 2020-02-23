import json
import sys
from bson import json_util
from pymongo import MongoClient
connection = MongoClient('localhost', 27017) 
db = connection['city']
collection = db['inspections']

def insert_document(document): 
      try:
          result=collection.save(document) 
      except Exception as ve:
          sys.exit(str(ve))                 
      return result
def get_document(collection, document): 
      try:
          result=collection.find(document) 
      except Exception as ve:
          sys.exit(str(ve))                 
      return document 
def update_document(document, updateData): 
      try:
          #updateData = { "result" : "needs inspection" }
          update_document=collection.update_one(document,{"$set":updateData}) 
      except Exception as ve:
          sys.exit(str(ve))                 
      return update_document
def delete_document(document): 
      try:
          delete_document=collection.delete_one(document) 
      except Exception as ve:
          sys.exit(str(ve))                 
      return delete_document
    
def main():
      myDocument = { "keyName" : "test value data"}
      print insert_document(myDocument) 

      myDocument = { "id" : "10021-2015-TEST", "certificate_number" : 9278807, "business_name" : "TEST INC.", "date" : "Feb 20 2017", "result" : "No Violation Issued", "sector" : "TEST Retail Dealer - 127", "address" : { "city" : "RIDGEWOOD", "zip" : 11385, "street" : "MENAHAN ST", "number" : 5555 } }
      print insert_document(myDocument)
      print get_document("id","10021-2015-TEST")
      updateData = { "result": "needs inspection" }
      print update_document({"id":"10021-2015-TEST"}, updateData) 
      print delete_document({"id":"10021-2015-TEST"})
                    
main()