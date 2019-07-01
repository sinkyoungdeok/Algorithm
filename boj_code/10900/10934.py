import hashlib
m=hashlib.new('sha')
m.update(raw_input())
print m.hexdigest()
