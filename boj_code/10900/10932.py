import hashlib
i=hashlib.new('SHA512')
i.update(raw_input())
print i.hexdigest()
