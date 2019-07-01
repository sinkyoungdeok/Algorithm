import hashlib
m=hashlib.new('sha256')
m.update(raw_input())
print m.hexdigest()
