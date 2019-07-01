import hashlib
m=hashlib.new('sha1')
m.update(raw_input())
print m.hexdigest()
