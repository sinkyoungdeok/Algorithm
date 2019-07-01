import hashlib
ha=hashlib.new('sha224')
ha.update(raw_input())
print ha.hexdigest()
