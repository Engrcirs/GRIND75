class Solution:
    def floodFill(self, image: List[List[int]], sr: int, sc: int, color: int) -> List[List[int]]:
        original_color = image[sr][sc]
        if original_color == color:
            return image
        rows = len(image)
        cols = len(image[0])
        def dfs(r, c):
            #Check boundaries
            if r < 0 or r >= rows or c < 0 or c >= cols:
                return
            #Color check is this pixel already painted? 
            #Also check if the starting color have the same color of its adjacent or simply detects a wall
            if image[r][c] != original_color:
                return
            #Paint the pixel
            image[r][c] = color
            #Spread the paint
            dfs(r-1, c) #Up
            dfs(r+1,c)  #Down
            dfs(r, c-1) #Left
            dfs(r, c+1) #Right
        # Start the recursion from the pixel we originally clicked
        dfs(sr, sc)
        return image