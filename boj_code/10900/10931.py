import hashlib
i=hashlib.new('SHA384')
i.update(raw_input())
print i.hexdigest()
