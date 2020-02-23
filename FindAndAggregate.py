import json
import sys
from bson import json_util
from pymongo import MongoClient
connection = MongoClient('localhost', 27017) 
db = connection['market']
collection = db['stocks']
collection_comp = db['company']

def get_document(collection, low, high): 
      try:
          result=collection.find({"50-Day Simple Moving Average":{"$gt":low, "$lt":high}}).count()
          print ("We Found " + str(result) + " documents")
      except Exception as ve:
          sys.exit(str(ve))                 
      return
def get_input(collection):
      x = input("Enter Low Numerical Value: ")
      y = input("Enter High Numerical Value: ")
      print(x)
      print(y)
      get_document(collection, x, y)
      return
def get_industry(collection, industry): 
      try:
          result=collection.find({"Industry": industry}, {"Ticker":1, "_id":0})
          print list(result)
      except Exception as ve:
          sys.exit(str(ve))                 
      return
def get_industryInput(collection):
      a = raw_input("Enter Industry Name: ")
      print(a)
      get_industry(collection, a)
      return
def aggregate(collection, sector): 
      try:
          result=collection.aggregate([{"$match":{"Sector":sector}}, {"$group":{"_id":"$Industry","total":{"$sum":"$Shares Outstanding"}}}])
          print list(result)
      except Exception as ve:
          sys.exit(str(ve))                 
      return
def aggregateSector(collection):
      a = raw_input("Enter Sector Name: ")
      print(a)
      aggregate(collection, a)
      return
def main():
      get_input(collection)
      get_industryInput(collection)
      aggregateSector(collection)
main()