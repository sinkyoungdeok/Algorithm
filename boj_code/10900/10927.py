import hashlib
i=hashlib.new('md5')
i.update(raw_input())
print i.hexdigest()
